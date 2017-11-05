/**
 * test.cpp
 *
 * EECS 183, Fall 2017
 * Project 4: CoolPics
 *
 * Kelvin Chang
 * kelvinct
 *
 * Testing all the implementation in Project 4
 */

#include <iostream>
#include <fstream>
#include "Point.h"
#include "Color.h"
#include "Graphics.h"
#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "pics.cpp"
#include "bmp.h"

using namespace std;


//Test Functions
void test_point();
void test_Color();
void test_Graphics();
void test_Line();
void test_Triangle();
void test_Circle();
void test_Rectangle();

//Main testing
int main() {
    
    test_point();
    
    test_Color();
    
    test_Graphics();
    
    test_Line();
    
    test_Triangle();
    
    test_Circle();
    
    test_Rectangle();
    
    return 0;
}

//Testing point.cpp
void test_point() {
    
    Point pt1;
    pt1.setX(15);
    cout << "pt1 is: " << pt1 << endl;
    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    cout << "pt1 is: " << pt1 << endl;
    
    Point pt2;
    cout << "pt2 is: " << pt2 << endl;
    
    Point pt3(-50, 1000);
    cout << "pt3 is: " << pt3 << endl;
    
    Point pt4;
    pt4.setY(100);
    cout << "pt4 is: " << pt4 << endl;
    
    Point pt5;
    cout << "x of pt5 is: " << pt5.getX() << endl;
    
    Point pt6;
    pt6.setX(-1000);
    pt6.setX(1000);
    pt6.setX(0);
    pt6.setX(100);
    pt6.setX(99);
    pt6.setX(69);
    
    cout<< "pt6 is: " << pt6 << endl;
    
    
    return;
}

//Testing Color.cpp
void test_Color(){
    
    Color c1;
    cout << "c1 is:" << endl;
    
    Color c2(50, 50, 50);
    cout << "c2 is: " << endl;
    
    Color c3(-1, 1000, 0);
    cout << "c3 is: " << endl;
    
    Color c4;
    ifstream input_file;
    input_file.open("data1.txt");
    c4.read(input_file);
    cout << "pt1 is: " << c4 << endl;
    
    Color c5;
    c5.setRed(-1000);
    cout << "c5 is: " << c5;
    c5.setRed(0);
    cout << "c5 is: " << c5;
    c5.setRed(1000);
    cout << "c5 is: " << c5;
    
    c5.setBlue(-1000);
    cout << "c5 is: " << c5;
    c5.setBlue(0);
    cout << "c5 is: " << c5;
    c5.setBlue(1000);
    cout << "c5 is: " << c5;
    
    c5.setGreen(-1000);
    cout << "c5 is: " << c5;
    c5.setGreen(0);
    cout << "c5 is: " << c5;
    c5.setGreen(1000);
    cout << "c5 is: " << c5;
    
    Color c6;
    cout << "(" << c6.getRed() << "," << c6.getBlue() << "," << c6.getGreen() << ")" << endl;
    
}

void test_Line(){
    
    Point p1;
    Point p2;
    Color c1(50, 50, 50);
    
    Line l1(p1, p2, c1);
    ifstream input_file;
    input_file.open("lines.txt");
    l1.read(input_file);
    cout << "l1 is: " << l1 << endl;
}

void test_Triangle(){
    
    Point p1;
    Point p2;
    Point p3;
    Color c1(50, 50, 50);
    
    Triangle t1(p1, p2, p3, c1);
    ifstream input_file;
    input_file.open("triangles.txt");
    t1.read(input_file);
    cout << "t1 is: " << t1 << endl;
}

void test_Circle(){
    
    Point p1;
    Color c1(50, 50, 50);
    
    Circle circle1 (p1, 5, c1);
    ifstream input_file;
    input_file.open("circles.txt");
    circle1.read(input_file);
    cout << "circle1 is: " << circle1 << endl;
}

void test_Rectangle(){
    
    Point p1;
    Point p2;
    Color c1(50, 50, 50);
    
    Rectangle rec1 (p1, p2, c1);
    ifstream input_file;
    input_file.open("rectangles.txt");
    rec1.read(input_file);
    cout << "rec1 is: " << rec1 << endl;
}
