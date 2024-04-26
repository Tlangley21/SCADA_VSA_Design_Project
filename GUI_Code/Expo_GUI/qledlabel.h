#ifndef QLEDLABEL_H
#define QLEDLABEL_H

#include <QWidget>
#include <QLabel>

class QLedLabel : public QWidget // Change to QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString labelText READ labelText WRITE setLabelText NOTIFY labelTextChanged)
    Q_PROPERTY(int defaultState READ defaultState WRITE setDefaultState NOTIFY defaultStateChanged)



public:
    explicit QLedLabel(QWidget *parent = nullptr);

    enum State{
        StateOk,
        StateOkBlue,
        StateWarning,
        StateError
    };
    Q_ENUM(State) // Make the State enum known to the Qt meta-object system

    QString labelText() const;
    void setLabelText(const QString &text);

    int defaultState() const; // Returns the current default state as int
    void setDefaultState(int state); // Sets the default state from int


signals:
    void labelTextChanged(const QString &text);
    void defaultStateChanged(int state);

public slots:
    void setState(State state);
    void setState(bool state);

private:
    QLabel* textLabel; // Added for the text label
    QLabel* ledIndicator; // Added for the LED indicator
    State _defaultState; // Store the default state

};

#endif // QLEDLABEL_H
