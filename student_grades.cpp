  #include <iostream>
  #include <algorithm>
  #include <vector>
  using namespace std;

  int main() {
    cout << "Please enter your midterm and final grades"
    double midterm, final;
    cin >> midterm >> final;
    cout << "Enter all homework grades "
         << "followed by end-of-file ";
    double x;
    vector<double> homework;
    while (homework.size() != 3) {
      cin >> x;
      homework.push_back(x);
    if (homework.size() == 0) {
      cout << endl << "You need to enter at least one homework grade "
                      "Please try again." << endl;
    return 1; // Signal an error;
  }
  sort(homework.begin(). homework.end());
  int mid = homework.size() / 2;
  double median;
  if (homework.size() % 2 == 0) {
    median = (homework[mid - 1] + homework[mid]) / 2;
  else
    median = homework[mid];
  streamsize prec = cout.precision(3);
  cout << "Your course grade is "
       << 0.2 * midterm + 0.4 * final + 0.4 * medium << endl;
  cout.precision(prec);
  return 0;
}
    
    
  
  
  
  
  
  
  
  
  
  
  
