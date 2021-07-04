#pragma once

#include "stdint.h"

namespace COMMON {

// Возможные состояния ячейки
enum class ECell : uint8_t
{
  LOCK = 0,
  FREE = 1,
  SET = 2
};

enum class TypeFild
{
  ENGLISH = 0,
  EUROPEAN = 1,
  Arbitrary = 2
};
}