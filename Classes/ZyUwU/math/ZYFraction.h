#pragma once

#include "stdio.h"
#include "stdlib.h"
#include "cocos2d.h"
#include "ZyUwU/platform/ZYMacros.h"
#include "SmartAlgorithm.h"
#include "ZyUwU/base/ZYSupport.h"

NS_ZY_BEGIN

class Fraction
{
GLO:
    /**
     * @def The constructor to create the Fraction.
     *
     * @param nNumerator The numerator of the fraction.
     * @param nDenominator The denominator of the fraction.
     */
    Fraction(int nNumerator, int nDenominator);

    /**
     * @def The constructor to create the Fraction.
     *
     * @param fNum The decimal to convert it to the fraction
     */
    Fraction(float fNum);

    /**
     * @def The constructor to create the Fraction
     *
     * @param f The address of the fraction.
     */
    Fraction(const Fraction &f);

GLO:
    /**
     * @def Shortcut this fraction.
     */
    void shortCut();

    /**
     * @def Print out all the details of this fraction.
     */
    void log();

    /**
     * @def This fraction clone itself
     *
     * @param bIsShortCut Set to TRUE if you want to short cut the result.
     *
     * @return The cloner of this fraction.
     */
    Fraction clone(bool bIsShortCut = true);

    /**
     * @def Find the LCM between to denominator of this fraction and the input fraction.
     *
     * @param f The target fraction.
     * @param bIsShortCut Set TRUE t shortcut the target fraction
     */
    void reduceFractionToCommonDenominator(Fraction& f, bool bIsShortCut = true);

    /**
     * @def Adds this fraction and the specified fraction.
     *
     * @param f The target fraction to add.
     * @param bIsShortCut Set TRUE if you want to shortcut the result.
     */
    void add(Fraction& f, bool bIsShortCut = true);

    /**
     * @def Subtracts this fraction and the specified fraction.
     *
     * @param f The target fraction to subtract.
     * @param bIsShortCut Set TRUE if you want to shortcut the result.
     */
    void subtract(Fraction& f, bool bIsShortCut = true);

    /**
     * @def Calculate the result of this fraction time to the specified fraction.
     *
     * @param f The target fraction to multiple.
     * @param bIsShortCut Set TRUE if you want to shortcut the result.
     */
    void multiple(Fraction& f, bool bIsShortCut = true);

    /**
     *
     * @param f
     * @param bIsShortCut
     */
    void divide(Fraction& f, bool bIsShortCut = true);
    void replace(Fraction& f, bool bIsShortCut = true);
    void negate();
    float toFloat();
    std::string toString();

MEM:
    void setMemory();
    void loadMemory();
    void autoValid();

GLO:

    /**
     * @def Fast shortcut a fraction by input the numerator and denominator of it.
     *
     * @param nNumerator The numerator of the fraction.
     * @param nDenominator The denominator of the fraction.
     *
     * @return The shortcut of the fraction.
     */
    STT Fraction fastShortCut(int nNumerator, int nDenominator);

    /**
     * @def Create a new fraction by cloning it from an existed fraction.
     *
     * @param cCLone The target fraction that need to be cloned.
     * @param bIsShortCut Set to TRUE if you want shortcut the result, FALSE otherwise.
     *
     * @return The cloned fraction.
     */
    STT Fraction clone(Fraction cCLone, bool bIsShortCut = true);

    /**
     * @def Fast calculate the percent of a number.
     *
     * @param numerator The number that need to be divided to 100. Or in other hand, this is the numerator of the fraction that have the denominator is 100.
     *
     * @return The percentage of the numerator
     *
     * @note The result is the decimal.
     */
    STT float fastPercent(float numerator);

    /**
     * @def Get the fraction in decimal.
     *
     * @param f The fraction to be converted.
     *
     * @return The fraction in decimal.
     */
    STT float toFloat(Fraction f);

    /**
     * @def Get the fraction in decimal.
     *
     * @param nNumerator The numerator of the fraction.
     * @param nDenominator The denominator of the fraction.
     *
     * @return The fraction in decimal.
     */
    STT float toFloat(int nNumerator, int nDenominator);

    /**
     * @def Get the fraction from the input decimal.
     *
     * @param fNumber The decimal to convert to the fraction.
     *
     * @return The fraction.
     */
    STT Fraction toFraction(float fNumber);

    /**
     * @def The addition of two specific fraction and stores the result in dst.
     *
     * @param f1 The first fraction.
     * @param f2 The second fraction.
     * @param dst The fraction to stores the result in it.
     * @param bIsShortCut Set True if you want to shortcut the dst.
     */
    STT void add(Fraction& f1, Fraction& f2, Fraction *dst, bool bIsShortCut = true);

    /**
     * @def Subtraction of two specific fraction and stores the result in dst.
     *
     * @param f1 The first fraction.
     * @param f2 The second fraction.
     * @param dst The fraction to stores the result in it.
     * @param bIsShortCut Set True if you want to shortcut the dst.
     */
    STT void subtract(Fraction& f1, Fraction& f2, Fraction *dst, bool bIsShortCut = true);

    /**
     * @def The multiplication of two specific fraction and stores the result in dst.
     *
     * @param f1 The first fraction.
     * @param f2 The second fraction.
     * @param dst The fraction to stores the result in it.
     * @param bIsShortCut Set True if you want to shortcut the dst.
     */
     STT void multiple(Fraction& f1, Fraction& f2, Fraction *dst, bool bIsShortCut = true);

    /**
     * @def The divination of two specific fraction and stores the result in dst.
     *
     * @param f1 The first fraction.
     * @param f2 The second fraction.
     * @param dst The fraction to stores the result in it.
     * @param bIsShortCut Set True if you want to shortcut the dst.
     */
     STT void divide(Fraction& f1, Fraction& f2, Fraction *dst, bool bIsShortCut = true);

GLO:
    /**
     * @def Set the numerator for the fraction.
     *
     * @param nNumerator The new numerator.
     */
    INL void setNumerator(int nNumerator) {this->m_nNumerator = nNumerator;}

    /**
     * @def Set the denominator for the fraction.
     *
     * @param nDenominator The new denominator.
     */
    INL void setDenominator(int nDenominator) {this->m_nDenominator = nDenominator;}

GLO:
    /**
     * @def Get the numerator of the fraction.
     *
     * @return The numberator of the fraction.
     */
    INL int getNumerator() {return this->m_nNumerator;}

    /**
     * @def Get the denominator of the fraction.
     *
     * @return The denominator of the fraction.
     */
    INL int getDenominator() {return this->m_nDenominator;}

    /**
     * @def The constant of the numerator of the fraction.
     *
     * @return The constant of the numberator.
     */
    INL int getNumerator() const {return this->m_nNumerator;}

    /**
     * @def The constant of the denominator of the fraction.
     *
     * @return The constant of the denominator.
     */
    INL int getDenominator() CON {return this->m_nDenominator;}

GLO:
    /**
     *  Calculate the sum of this fraction with the given fraction
     *
     *  @Note: This does not modify this fraction
     *
     *  @pragma f: The fraction to add
     *  @return The fraction sum
     */
    Fraction operator+(Fraction& f);
    Fraction operator+=(Fraction& f);
    Fraction operator+(float f);
    Fraction operator+=(float f);

    Fraction operator-(Fraction& f);
    Fraction operator-=(Fraction& f);
    Fraction operator-(float f);
    Fraction operator-=(float f);

    Fraction operator-();

    void operator=(Fraction& f);

    Fraction operator*(Fraction& f);
    Fraction operator*=(Fraction& f);
    Fraction operator*(float f);
    Fraction operator*=(float f);

    Fraction operator/(Fraction& f);
    Fraction operator/=(Fraction& f);
    Fraction operator/(float f);
    Fraction operator/=(float f);

    bool operator==(Fraction& f);
    bool operator!=(Fraction& f);
    bool operator<(Fraction& f);
    bool operator>(Fraction& f);
    bool operator<=(Fraction& f);
    bool operator>=(Fraction& f);

    bool operator==(float f);
    bool operator!=(float f);
    bool operator<(float f);
    bool operator>(float f);
    bool operator<=(float f);
    bool operator>=(float f);

protected:
    int m_nNumerator, m_nDenominator;

private:
    static const Fraction DEFAULT;

private:
    bool isValid();
    bool isValid() const;

private:
    int p_nNumeratorMem, p_nDenominatorMem;
};

using Frac = Fraction;

NS_ZY_END
