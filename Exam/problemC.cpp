bool palindrome (vector <int> input) {
    //first test base case, if there is nothing in vector then it should return false
    if(input.size() == 0) {
        return false;
    }
    //start by creating a new vector and writing the inverse to it
    vector <int> inverse;
    for(int i = (input.size() - 1); i >= 0; --i) {
        inverse.push_back(input.at(i));
    }
    //now check if the two vectors are equal
    bool isTrue;  //used to check if palindrome once done comparing the lists
    for(int i = 0; i < input.size(); ++i) {   //iterate over the vectors
        if(input.at(i) == inverse.at(i)) {    //see if the correct values are equal
            isTrue = true;
            continue;
        } else {                              //if they aren't then return false
            return false;
        }
    }
    if(isTrue) {           //checks if its a palindrome, to be safe
        return true;
    }
}