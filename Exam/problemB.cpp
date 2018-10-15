bool doubleL(string input) {
    bool found;   //used to determine if false
    if(input.size() == 1) {    //base case
        return false;
    }
    for(int i = 0; i < input.size(); ++i) {     //loop over the string
        if(input.at(i) == 'l' || input.at(i) == 'L') {   //find the first l
            if(input.at(i + 1) == 'l' || input.at(i + 1) == 'L') {   //if there is an l immediately after then return true
                return true;
            }
        } else {
            found = false;
        }
    }
    if(!found) {   //returns false if two L's are never found next to each other
        return false;
    }
}