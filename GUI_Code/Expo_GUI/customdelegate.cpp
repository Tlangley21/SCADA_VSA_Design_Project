#include "CustomDelegate.h"
#include <QPainter>
#include <QModelIndex>

CustomDelegate::CustomDelegate(QObject *parent) : QStyledItemDelegate(parent)
{
}

void CustomDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);

    QColor color = Qt::gray; // Default color

    // Attempt to retrieve the status for both parent and child items
    QVariant statusData = index.data(Qt::UserRole);
    if (statusData.isValid()) {
        int status = statusData.toInt();
        switch (status) {
        case 1: color = Qt::green; break;
        case 2: color = Qt::yellow; break;
        case 3: color = Qt::red; break;
        default: color = Qt::gray; break;
        }
    }

    // Draw the LED indicator
    const int ledSize = 10;
    QRect cellRect = option.rect;
    QRect ledRect = QRect(cellRect.center().x() - ledSize / 2, cellRect.center().y() - ledSize / 2, ledSize, ledSize);
    painter->setBrush(QBrush(color));
    painter->drawEllipse(ledRect);

    painter->restore();
}

