int main() {
    int leftWing;
    int rightWing;
    cin >> leftWing;
    cin >> rightWing;
    
    if (leftWing == 0 && rightWing == 0) {   //checks base case first
        cout << "Not possible";
    } else if (leftWing == rightWing) {      //checks if even
        int spots = 2*rightWing;
        cout << "Even " << spots;
    } else if (leftWing > rightWing) {       //we know it is odd, now checking which wing has more spots
        int spots = 2*leftWing;
        cout << "Odd " << spots;
    } else if (rightWing > leftWing) {
        int spots = 2*rightWing;
        cout << "Odd " << spots;
    }
    
    return 0;
}