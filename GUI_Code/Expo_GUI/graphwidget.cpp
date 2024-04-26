include "graphwidget.h"
#include <QtWidgets/QVBoxLayout>

GraphWidget::GraphWidget(QWidget *parent) :
    QWidget(parent)
{
    series = new QtCharts::QLineSeries(this);
    // ... add data points to the series ...

    chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->createDefaultAxes();
    // ... customize your chart ...

    chartView = new QtCharts::QChartView(chart, this);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);
    setLayout(layout);
}

// If you're not allocating any resources in the constructor that you need to release
// and you're setting parents for all your QObjects, you might not need a destructor.
GraphWidget::~GraphWidget()
{
    // Since Qt automatically deletes child objects that have a parent set,
    // you often don't need to explicitly delete Qt objects in the destructor.
}
