#pragma once
class Time {

    int first, second, minut;
public:

    void Display() const;
    void Display2() const;
    void Read();
    void minutes(int n);
    bool Init(int x, int y);
};