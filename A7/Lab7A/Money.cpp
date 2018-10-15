/* CSCI261 Lab: Money Class
 *
 * Description: Definition file for Money Class
 *
 * Author: Carter Fowler
 *
 */

#include "Money.h"

Money::Money () {
    dollars = 999;
    cents = 99;
}

Money::Money (int _dollars, int _cents) {
    dollars = _dollars;
    cents = _cents;
}