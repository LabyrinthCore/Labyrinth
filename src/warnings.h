// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Core developers
// Copyright (c) 2021-2022 The Labyrinth Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LABYRINTH_WARNINGS_H
#define LABYRINTH_WARNINGS_H

#include <string>

struct bilingual_str;

void SetMiscWarning(const bilingual_str& warning);
void SetfLargeWorkForkFound(bool flag);
bool GetfLargeWorkForkFound();
void SetfLargeWorkInvalidChainFound(bool flag);
/** Format a string that describes several potential problems detected by the core.
 * @param[in] verbose bool
 * - if true, get all warnings separated by <hr />
 * - if false, get the most important warning
 * @returns the warning string
 */
bilingual_str GetWarnings(bool verbose);

#endif //  LABYRINTH_WARNINGS_H
