/**
 * @file Pile.h
 * @brief pile of cards
 *
 * 
 */
#ifndef PILE_H
#define PILE_H

#include <algorithm>
#include <random>
#include <stdexcept>
#include <vector>

template <typename T>
class Pile
{
public:
    /** Adds an item to the top of the pile. */
    void addTop(const T& item) { mItems.push_back(item); }

    /** Adds an item to the bottom of the pile (used by the boss deck). */
    void addBottom(const T& item) { mItems.insert(mItems.begin(), item); }

    /** Removes and returns the top item. Throws if the pile is empty. */
    T drawTop()
    {
        if (mItems.empty())
        {
            throw std::out_of_range("Cannot draw from an empty pile");
        }
        T top = mItems.back();
        mItems.pop_back();
        return top;
    }

    /** Randomly reorders the pile. */
    void shuffle()
    {
        static std::mt19937 rng(std::random_device{}());
        std::shuffle(mItems.begin(), mItems.end(), rng);
    }

    /** Moves every item from this pile onto another pile, leaving this one empty. */
    void moveAllTo(Pile<T>& other)
    {
        for (const T& item : mItems)
        {
            other.addTop(item);
        }
        mItems.clear();
    }

    bool isEmpty() const { return mItems.empty(); }
    int size() const { return static_cast<int>(mItems.size()); }

private:
    std::vector<T> mItems;   // the back of the vector is the top of the pile
};

#endif