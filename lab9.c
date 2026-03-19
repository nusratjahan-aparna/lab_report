#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float m1, m2, m3; // মার্কস দশমিক হতে পারে তাই float
};

int main() {
    struct student s;
    float total, average;
    char grade;

    // ১. ইনপুট নেওয়া
    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf(" %[^\n]", s.name); // নামের মাঝখানে স্পেস নিলেও কাজ করবে

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    // ২. ক্যালকুলেশন
    total = s.m1 + s.m2 + s.m3;
    average = total / 3.0;

    // ৩. গ্রেড নির্ধারণ
    if (average >= 80)
        grade = 'A';
    else if (average >= 60)
        grade = 'B';
    else if (average >= 40)
        grade = 'C';
    else
        grade = 'F';

    // ৪. আউটপুট (এখানেই আপনার ভুল হয়েছিল)
    printf("\n--- Result ---\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    
    // Total এবং Average এর জন্য অবশ্যই %.2f ব্যবহার করবেন
    printf("Total Marks: %.2f\n", total); 
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}