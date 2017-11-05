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
    
    Point pt3point5(1000, -500);
    cout << "pt3.5 is: " << pt3point5 << endl;
    
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
    cout << "c1 is:" << c1 << endl;
    
    Color c2(50, 50, 50);
    cout << "c2 is: " << c2 << endl;
    
    Color c3(-1, 1000, 1000);
    cout << "c3 is: " << c3 << endl;
    
    Color c3point5(1000, -1, -1);
    cout << "c3.5 is: " << c3point5 << endl;
    
    Color c4;
    ifstream input_file;
    input_file.open("data1.txt");
    c4.read(input_file);
    cout << "pt1 is: " << c4 << endl;
    
    Color c5;
    c5.setRed(-1000);
    cout << "c5 is: " << c5.getRed();
    c5.setRed(0);
    cout << "c5 is: " << c5.getRed();
    c5.setRed(1000);
    cout << "c5 is: " << c5.getRed();
    
    c5.setBlue(-1000);
    cout << "c5 is: " << c5.getBlue();
    c5.setBlue(0);
    cout << "c5 is: " << c5.getBlue();
    c5.setBlue(1000);
    cout << "c5 is: " << c5.getBlue();
    
    c5.setGreen(-1000);
    cout << "c5 is: " << c5.getGreen();
    c5.setGreen(0);
    cout << "c5 is: " << c5.getGreen();
    c5.setGreen(1000);
    cout << "c5 is: " << c5.getGreen();
    
    Color c6;
    cout << "(" << c6.getRed() << "," << c6.getBlue() << "," << c6.getGreen() << ")" << endl;
    
    
}

//Testing Graphics
void test_Graphics(){
    
    Graphics g1;
    Color c1(50, 50, 50);
    int x = -1000;
    int y = -1000;
    g1.setPixel(x, y, c1);
    
}

void test_Line(){
    
    
    Point p1;
    Point p2;
    Point p3(50 ,50);
    Point p4(60, 60);
    Color c1(50, 50, 50);
    
    Line l1(p1, p3, c1);
    ifstream input_file;
    input_file.open("lines.txt");
    l1.read(input_file);
    cout << "l1 is: " << l1 << endl;
    
    Line l2;
    cout << "l2 is: " << l2 << endl;
    
    Line l3(p1, p2, c1);
    cout << "l3 is: " << l3 << endl;
    
    Line l4(p1, p3, c1);
    cout << "l4 is: " << l4 << endl;
    
    Line l5;
    l5.setStart(p1);
    cout << "l5 start is: " << l5.getStart() << endl;
    l5.setEnd(p3);
    cout << "l5 end is: " << l5.getEnd() << endl;
    
    Line l6;
    ofstream out;
    out.open("lines.txt");
    l6.write(out);
    
}

void test_Triangle(){
    
    Point p1;
    Point p2(1, 1);
    Point p3(2, 2);
    Color c1(50, 50, 50);
    Color c2(0, 0, 0);
    Color c3(100, 100, 100);
    
    Triangle t1(p1, p2, p3, c1);
    ifstream input_file;
    input_file.open("triangles.txt");
    t1.read(input_file);
    cout << "t1 is: " << t1 << endl;
    
    Triangle t2;
    cout << "t2 is: " << t2 << endl;
    
    Triangle t3(p1, p2, p3, c1);
    cout << "t3 is: " << t3 << endl;
    
    Triangle t4(p1, c1, p2, c2, p3, c3);
    cout << "t4 is: " << t4 << endl;
    
    Triangle t5;
    t5.setVertexOne(p3);
    cout << "t5 vertex one is: " << t5.getVertexOne() << endl;
    t5.setVertexThree(p2);
    cout << "t5 vertex three is: " << t5.getVertexThree() << endl;
    t5.setVertexThreeColor(c1);
    cout << "t5 vertex three color is: " << t5.getVertexThreeColor() << endl;
    
}

void test_Circle(){
    
    Point p1;
    Point p2(-1000, 1000);
    Color c1(50, 50, 50);
    
    Circle circle1 (p1, 5, c1);
    ifstream input_file;
    input_file.open("circles.txt");
    circle1.read(input_file);
    cout << "circle1 is: " << circle1 << endl;
    
    Circle circle2;
    cout << "circle2 is: " << circle2 << endl;
    
    Circle circle3;
    circle3.setCenter(p1);
    cout << "circle3 center is: " << circle3.getCenter() << endl;
    circle3.setCenter(p2);
    cout << "circle3 center is: " << circle3.getCenter() << endl;
    
    Circle circle4;
    circle4.setRadius(0);
    cout << "circle4 center is: " << circle4.getRadius() << endl;
    circle3.setRadius(-10);
    cout << "circle4 center is: " << circle4.getRadius() << endl;
    circle3.setRadius(1000);
    cout << "circle4 center is: " << circle4.getRadius() << endl;
}

void test_Rectangle(){
    
    Point p1;
    Point p1point2;
    Point p2(1, 1);
    Color c1(50, 50, 50);
    Color c2(100, 100, 100);
    Color c3(255, 255, 255);
    Color c4(0, 0, 0);

    Rectangle rec1 (p1, p2, c1);
    ifstream input_file;
    input_file.open("rectangles.txt");
    rec1.read(input_file);
    cout << "rec1 is: " << rec1 << endl;
    
    Rectangle rec2;
    cout << "rec2 is: " << rec2 << endl;
    
    Rectangle rec3(p1, p2, c1);
    cout << "rec3 is: " << rec3 << endl;
    
    Rectangle rec4(p1, p2, c1, c2, c3, c4);
    cout << "rec4 is: " << rec4 << endl;
    
    Rectangle rec4point5(p1, p1, c1, c1, c1, c1);
    cout << "rec4.5 is: " << rec4point5 << endl;
    
    Rectangle rec5;
    rec5.setColor(c4);
    
    Rectangle rec6;
    rec6.setStart(p1);
    cout << "rec6 start is: " << rec6.getStart() << endl;
    rec6.setEnd(p2);
    cout << "rec6 end is: " << rec6.getEnd() << endl;
    
}

