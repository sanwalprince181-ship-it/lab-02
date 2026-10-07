//#include <iostream>
//using namespace std;
//
//
//class Shape {
//public:
//    virtual double area() = 0;  
//};
//
//class Circle : public Shape {
//private:
//    double radius;
//
//public:
//    Circle(double r) {
//        radius = r;
//    }
//
//    double area() override {
//        return 3.14159 * radius * radius;
//    }
//};
//
//
//class Rectangle : public Shape {
//private:
//    double length;
//    double width;
//
//public:
//    Rectangle(double l, double w) {
//        length = l;
//        width = w;
//    }
//
//    double area() override {
//        return length * width;
//    }
//};
//
//int main() {
//
//    Circle circle(5);
//    Rectangle rectangle(10, 4);
//
//    cout << "Area of Circle: " << circle.area() << endl;
//    cout << "Area of Rectangle: " << rectangle.area() << endl;
//
//    return 0;
//}


     //  task 02
//#include <iostream>
//using namespace std;
//
//class Employee {
//public:
//    virtual double calculateSalary() = 0;  
//};
//
//
//class FullTimeEmployee : public Employee {
//private:
//    double fixedSalary;
//
//public:
//    FullTimeEmployee(double salary) {
//        fixedSalary = salary;
//    }
//
//    double calculateSalary() override {
//        return fixedSalary;
//    }
//};
//
//
//class PartTimeEmployee : public Employee {
//private:
//    double hoursWorked;
//    double hourlyRate;
//
//public:
//    PartTimeEmployee(double hours, double rate) {
//        hoursWorked = hours;
//        hourlyRate = rate;
//    }
//
//    double calculateSalary() override {
//        return hoursWorked * hourlyRate;
//    }
//};
//
//int main() {
//
//    FullTimeEmployee fullTime(80000);
//    PartTimeEmployee partTime(40, 1000);
//
//    cout << "Full-Time Employee Salary: "
//        << fullTime.calculateSalary() << endl;
//
//    cout << "Part-Time Employee Salary: "
//        << partTime.calculateSalary() << endl;
//
//    return 0;
//}

             
                 
                 // Task 03

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//class LibraryItem {
//public:
//    virtual void display() = 0;
//    virtual string getName() = 0;
//
//    virtual ~LibraryItem() {}
//};
//
//
//
//class Book : public LibraryItem {
//private:
//    string title;
//    string author;
//    int pages;
//
//public:
//    Book(string t, string a, int p) {
//        title = t;
//        author = a;
//        pages = p;
//    }
//
//    void display() override {
//        cout << "Book: " << title
//            << ", Author: " << author
//            << ", Pages: " << pages << endl;
//    }
//
//    string getName() override {
//        return title;
//    }
//
//    string getTitle() {
//        return title;
//    }
//
//    int getPages() {
//        return pages;
//    }
//};
//
//
//
//
//class Newspaper : public LibraryItem {
//private:
//    string name;
//    string date;
//    string edition;
//
//public:
//    Newspaper(string n, string d, string e) {
//        name = n;
//        date = d;
//        edition = e;
//    }
//
//    void display() override {
//        cout << "Newspaper: " << name
//            << ", Date: " << date
//            << ", Edition: " << edition << endl;
//    }
//
//    string getName() override {
//        return name;
//    }
//
//    string getEdition() {
//        return edition;
//    }
//};
//
//
//
//template <typename T>
//int linearSearch(T arr[], int size, T key) {
//
//    for (int i = 0; i < size; i++) {
//
//        if (arr[i] == key) {
//            return i;
//        }
//    }
//
//    return -1;
//}
//
//
//
//
//template <typename T>
//int binarySearch(T arr[], int size, T key) {
//
//    int low = 0;
//    int high = size - 1;
//
//    while (low <= high) {
//
//        int mid = (low + high) / 2;
//
//        if (arr[mid] == key) {
//            return mid;
//        }
//
//        if (arr[mid] < key) {
//            low = mid + 1;
//        }
//        else {
//            high = mid - 1;
//        }
//    }
//
//    return -1;
//}
//
//
//
//class Library {
//private:
//
//    Book* books[100];
//    Newspaper* newspapers[100];
//
//    int bookCount;
//    int newspaperCount;
//
//public:
//
//    Library() {
//        bookCount = 0;
//        newspaperCount = 0;
//    }
//
//
//  
//    void addBook(Book book) {
//
//        if (bookCount < 100) {
//            books[bookCount] = new Book(book);
//            bookCount++;
//        }
//    }
//
//
//
//    void addNewspaper(Newspaper newspaper) {
//
//        if (newspaperCount < 100) {
//            newspapers[newspaperCount] =
//                new Newspaper(newspaper);
//
//            newspaperCount++;
//        }
//    }
//
//
//
//    void displayCollection() {
//
//        cout << "\nBooks:\n";
//
//        for (int i = 0; i < bookCount; i++) {
//            books[i]->display();
//        }
//
//        cout << "\nNewspapers:\n";
//
//        for (int i = 0; i < newspaperCount; i++) {
//            newspapers[i]->display();
//        }
//    }
//
//
//    
//    void sortBooksByPages() {
//
//        for (int i = 0; i < bookCount - 1; i++) {
//
//            int minIndex = i;
//
//            for (int j = i + 1; j < bookCount; j++) {
//
//                if (books[j]->getPages()
//                    < books[minIndex]->getPages()) {
//
//                    minIndex = j;
//                }
//            }
//
//            if (minIndex != i) {
//
//                Book* temp = books[i];
//
//                books[i] = books[minIndex];
//
//                books[minIndex] = temp;
//            }
//        }
//    }
//
//
//   
//    void sortNewspapersByEdition() {
//
//        for (int i = 0; i < newspaperCount - 1; i++) {
//
//            int minIndex = i;
//
//            for (int j = i + 1; j < newspaperCount; j++) {
//
//                if (newspapers[j]->getEdition()
//                    < newspapers[minIndex]->getEdition()) {
//
//                    minIndex = j;
//                }
//            }
//
//            if (minIndex != i) {
//
//                Newspaper* temp = newspapers[i];
//
//                newspapers[i] = newspapers[minIndex];
//
//                newspapers[minIndex] = temp;
//            }
//        }
//    }
//
//
//    
//    Book* searchBookByTitle(string title) {
//
//        for (int i = 0; i < bookCount; i++) {
//
//            if (books[i]->getTitle() == title) {
//                return books[i];
//            }
//        }
//
//        return nullptr;
//    }
//
//
//   
//    Newspaper* searchNewspaperByName(string name) {
//
//        for (int i = 0; i < newspaperCount; i++) {
//
//            if (newspapers[i]->getName() == name) {
//                return newspapers[i];
//            }
//        }
//
//        return nullptr;
//    }
//
//
//    
//    ~Library() {
//
//        for (int i = 0; i < bookCount; i++) {
//            delete books[i];
//        }
//
//        for (int i = 0; i < newspaperCount; i++) {
//            delete newspapers[i];
//        }
//    }
//};
//
//
//
//
//int main() {
//
//   
//    Book book1(
//        "The Catcher in the Rye",
//        "J.D. Salinger",
//        277
//    );
//
//    Book book2(
//        "To Kill a Mockingbird",
//        "Harper Lee",
//        324
//    );
//
//
// 
//    Newspaper newspaper1(
//        "Washington Post",
//        "2024-10-13",
//        "Morning Edition"
//    );
//
//    Newspaper newspaper2(
//        "The Times",
//        "2024-10-12",
//        "Weekend Edition"
//    );
//
//
//   
//    Library library;
//
//
//    library.addBook(book1);
//    library.addBook(book2);
//
//
//  
//    library.addNewspaper(newspaper1);
//    library.addNewspaper(newspaper2);
//
//
// 
//    cout << "Before Sorting:\n";
//
//    library.displayCollection();
//
//    library.sortBooksByPages();
//
//    library.sortNewspapersByEdition();
//
//
//   
//    cout << "\nAfter Sorting:\n";
//
//    library.displayCollection();
//
//
//    
//    Book* foundBook =
//        library.searchBookByTitle(
//            "The Catcher in the Rye"
//        );
//
//
//    if (foundBook != nullptr) {
//
//        cout << "\nFound Book:\n";
//
//        foundBook->display();
//    }
//    else {
//
//        cout << "\nBook not found.\n";
//    }
//
//
// 
//    Newspaper* foundNewspaper =
//        library.searchNewspaperByName(
//            "The Times"
//        );
//
//
//    if (foundNewspaper != nullptr) {
//
//        cout << "\nFound Newspaper:\n";
//
//        foundNewspaper->display();
//    }
//    else {
//
//        cout << "\nNewspaper not found.\n";
//    }
//
//
//    return 0;
//}
//

