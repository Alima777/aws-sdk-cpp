﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ComputeTypeMapper
      {

        static const int BUILD_GENERAL1_SMALL_HASH = HashingUtils::HashString("BUILD_GENERAL1_SMALL");
        static const int BUILD_GENERAL1_MEDIUM_HASH = HashingUtils::HashString("BUILD_GENERAL1_MEDIUM");
        static const int BUILD_GENERAL1_LARGE_HASH = HashingUtils::HashString("BUILD_GENERAL1_LARGE");
        static const int BUILD_GENERAL1_2XLARGE_HASH = HashingUtils::HashString("BUILD_GENERAL1_2XLARGE");


        ComputeType GetComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_GENERAL1_SMALL_HASH)
          {
            return ComputeType::BUILD_GENERAL1_SMALL;
          }
          else if (hashCode == BUILD_GENERAL1_MEDIUM_HASH)
          {
            return ComputeType::BUILD_GENERAL1_MEDIUM;
          }
          else if (hashCode == BUILD_GENERAL1_LARGE_HASH)
          {
            return ComputeType::BUILD_GENERAL1_LARGE;
          }
          else if (hashCode == BUILD_GENERAL1_2XLARGE_HASH)
          {
            return ComputeType::BUILD_GENERAL1_2XLARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeType>(hashCode);
          }

          return ComputeType::NOT_SET;
        }

        Aws::String GetNameForComputeType(ComputeType enumValue)
        {
          switch(enumValue)
          {
          case ComputeType::NOT_SET:
            return {};
          case ComputeType::BUILD_GENERAL1_SMALL:
            return "BUILD_GENERAL1_SMALL";
          case ComputeType::BUILD_GENERAL1_MEDIUM:
            return "BUILD_GENERAL1_MEDIUM";
          case ComputeType::BUILD_GENERAL1_LARGE:
            return "BUILD_GENERAL1_LARGE";
          case ComputeType::BUILD_GENERAL1_2XLARGE:
            return "BUILD_GENERAL1_2XLARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
