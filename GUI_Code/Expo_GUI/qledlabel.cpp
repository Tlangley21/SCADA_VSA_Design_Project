#include "qledlabel.h"
#include <QHBoxLayout>
#include <QDebug>

static const int SIZE = 20;
static const QString greenSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:1, y2:1, stop:0 rgba(20, 252, 7, 255), stop:1 rgba(25, 134, 5, 255));").arg(SIZE/2);
static const QString redSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:0.92, y2:0.988636, stop:0 rgba(255, 12, 12, 255), stop:0.869347 rgba(103, 0, 0, 255));").arg(SIZE/2);
static const QString orangeSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.232, y1:0.272, x2:0.98, y2:0.959773, stop:0 rgba(255, 113, 4, 255), stop:1 rgba(91, 41, 7, 255))").arg(SIZE/2);
static const QString blueSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.04, y1:0.0565909, x2:0.799, y2:0.795, stop:0 rgba(203, 220, 255, 255), stop:0.41206 rgba(0, 115, 255, 255), stop:1 rgba(0, 49, 109, 255));").arg(SIZE/2);

QLedLabel::QLedLabel(QWidget *parent) :
    QWidget(parent),
    textLabel(new QLabel("Status:", this)),
    ledIndicator(new QLabel(this)) // Initialize the text label with default text
{
    // Configure the LED indicator size, default: 20, see above
    ledIndicator->setFixedSize(SIZE, SIZE);

    // Layout the text label and LED indicator horizontally
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(textLabel);
    layout->addWidget(ledIndicator);

    // Remove spacing and margins for a compact look
    layout->setSpacing(5); // Adjust spacing as needed
    layout->setContentsMargins(0, 0, 0, 0);

    // Set initial state
    setState(StateOk);
}

QString QLedLabel::labelText() const
{
    return textLabel->text();
}

int QLedLabel::defaultState() const
{
    return static_cast<int>(_defaultState);
}

void QLedLabel::setLabelText(const QString &text)
{
    if (textLabel->text() != text) {
        textLabel->setText(text);
        emit labelTextChanged(text);
    }
}

void QLedLabel::setState(State state)
{
    qDebug() << "setState" << state;
    switch(state) {
    case StateOk:
        ledIndicator->setStyleSheet(greenSS);
        break;
    case StateWarning:
        ledIndicator->setStyleSheet(orangeSS);
        break;
    case StateError:
        ledIndicator->setStyleSheet(redSS);
        break;
    case StateOkBlue:
    default:
        ledIndicator->setStyleSheet(blueSS);
        break;
    }
}

void QLedLabel::setState(bool state)
{
    setState(state ? StateOk : StateError);
}

void QLedLabel::setDefaultState(int state)
{
    State newState = static_cast<State>(state);
    if (_defaultState != newState) {
        _defaultState = newState;
        setState(_defaultState); // Apply the default state
        emit defaultStateChanged(state);
    }
}
