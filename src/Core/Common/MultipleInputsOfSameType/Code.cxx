/*=========================================================================
 *
 *  Copyright NumFOCUS
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         https://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#include "itkImage.h"

#include "itkImageFilterMultipleInputs.h"

int
main()
{
  // Setup types
  using ImageType = itk::Image<unsigned char, 2>;
  using FilterType = itk::ImageFilterMultipleInputs<ImageType>;

  auto image = ImageType::New();
  auto mask = ImageType::New();

  // Create and the filter
  auto filter = FilterType::New();
  filter->SetInputImage(image);
  filter->SetInputMask(mask);
  filter->Update();

  return EXIT_SUCCESS;
}
