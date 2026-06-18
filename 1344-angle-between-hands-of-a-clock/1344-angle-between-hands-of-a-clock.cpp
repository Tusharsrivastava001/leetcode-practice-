class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minangle=6.0*minutes;
        double hourangle=hour*30+(minutes*0.5); //coz here wil be some angle btween 2 and 3
        double diff=abs(minangle-hourangle);
        return min(diff,360-diff);
    }
};