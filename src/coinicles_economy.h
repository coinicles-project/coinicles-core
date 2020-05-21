#pragma once
#include <cstdint>

constexpr uint64_t COIN                       = (uint64_t)1000000000; // 1 CICO = pow(10, 9)
constexpr uint64_t MONEY_SUPPLY               = ((uint64_t)(-1)); // MONEY_SUPPLY - total number coins to be generated
constexpr uint64_t EMISSION_LINEAR_BASE       = ((uint64_t)(1) << 58);
constexpr uint64_t EMISSION_SUPPLY_MULTIPLIER = 19;
constexpr uint64_t EMISSION_SUPPLY_DIVISOR    = 10;
constexpr uint64_t EMISSION_DIVISOR           = 2000000;
// Transition (HF13) money supply parameters
constexpr uint64_t BLOCK_REWARD_HF13      = 25 * COIN;
constexpr uint64_t MINER_REWARD_HF13      = BLOCK_REWARD_HF13 * 24 / 100;
constexpr uint64_t SN_REWARD_HF13         = BLOCK_REWARD_HF13 * 66 / 100;
constexpr uint64_t FOUNDATION_REWARD_HF13 = BLOCK_REWARD_HF13 * 10 / 100;

// New (HF14+) money supply parameters (tentative - HF14 not yet scheduled)
constexpr uint64_t BLOCK_REWARD_HF14      = 21 * COIN;
constexpr uint64_t SN_REWARD_HF14         = BLOCK_REWARD_HF14 * 90 / 100;
constexpr uint64_t FOUNDATION_REWARD_HF14 = BLOCK_REWARD_HF14 * 10 / 100;

static_assert(                    SN_REWARD_HF14 + FOUNDATION_REWARD_HF14 == BLOCK_REWARD_HF14, "math fail");
static_assert(MINER_REWARD_HF13 + SN_REWARD_HF13 + FOUNDATION_REWARD_HF13 == BLOCK_REWARD_HF13, "math fail");

