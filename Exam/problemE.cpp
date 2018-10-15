class Board {
    public:
       Board();
       Board(int h, int w, int l, int d);
       int getHeight();
       int getWidth();
       int getLength();
       int getDensity();
       void setHeight(int h);
       void setWidth(int w);
       void setLength(int l);
       void setDensity(int d);
       int volume();
       int weight();
    private:
       int _height;   //in inches
       int _width;    //in inches
       int _length;   //in feet
       int _density;  //in pounds per cubic inch
       bool _check(int input); //checks to make sure all are positive
};

int main() {
    int N;
    cin >> N;
    //first check base cases
    if (N == 0) {
        cout << "0";
    } else if (N < 0) {
        cout << "Not possible";
    } else { //base cases don't apply so we can continue on
        int boardArray [N] [4];     //creates an array
        int totalWeight = 0;  //total weight of the boards
        for(int i = 0; i < N; ++i) {  //gets user input for height, width, length, and density of each board
            cin >> boardArray[N][0];
            cin >> boardArray[N][1];
            cin >> boardArray[N][2];
            cin >> boardArray[N][3];
            Board board(boardArray[N][0], boardArray[N][1], boardArray[N][2], boardArray[N][3]);
            totalWeight += board.weight();
        }
        int maxWeight;
        cin >> maxWeight;   //max weight the truck can carry
        int numTrips = totalWeight/maxWeight;
        if(totalWeight%maxWeight != 0) {
            numTrips += 1;
        }
        cout << numTrips;
    }
    
    return 0;
}

Board::Board() {
    _height = 1;
    _width = 1;
    _length = 1;
    _density = 1;
}
Board::Board(int h, int w, int l, int d) {   //be sure to check each individual value after it is set
    _height = h;
    if(!_check(_height)) {
        _height = 1;
    }
    _width = w;
    if(!_check(_width)) {
        _width = 1;
    }
    _length = l;
    if(!_check(_length)) {
        _length = 1;
    }
    _density = d;
    if(!_check(_density)) {
        _density = 1;
    }
}
bool Board::_check(int input) {
    if(input > 0) {
        return true;
    } else {
        return false;
    }
}
int Board::getHeight() {
    return _height;
}
int Board::getWidth() {
    return _width;
}
int Board::getLength() {
    return _length;
}
int Board::getDensity() {
    return _density;
}
void Board::setHeight(int h) {
    _height = h;
    if(!_check(_height)) {
        _height = 1;
    }
}
void Board::setWidth(int w) {
    _width = w;
    if(!_check(_width)) {
        _width = 1;
    }
}
void Board::setLength(int l) {
    _length = l;
    if(!_check(_length)) {
        _length = 1;
    }
}
void Board::setDensity(int d) {
    _density = d;
    if(!_check(_density)) {
        _density = 1;
    }
}
int Board::volume() {
    return _height * _width * (_length * 12);  //length is in feet so multiply by 12 to get it into inches
}
int Board::weight() {
    return _density * volume();
}