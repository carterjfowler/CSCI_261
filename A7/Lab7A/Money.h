/* CSCI261 Lab: Money Class
 *
 * Description: Declaration file for Money Class
 *
 * Author: Carter Fowler
 *
 */

#pragma once

class Money {
    public:
        Money();
        Money(int _dollars, int _cents);
        int dollars;
        int cents;
};