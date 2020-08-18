/**
 * MIT License
 *
 * Copyright (c) 2020 Rajdeep Roy Chowdhury
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "framesexporter.h"

void splitwebp::FramesExporter::loadFrames(const std::vector<cv::Mat>& frameList) {
    mFrameList = frameList;
}
std::string splitwebp::FramesExporter::getOutputFileExtension() const {
    return mOutputFileExtension;
}
std::string splitwebp::FramesExporter::getOutputFilePrefix() const {
    return mOutputFilePrefix;
}
void splitwebp::FramesExporter::setOutputFileExtension(const std::string& extension) {
    mOutputFileExtension = extension;
}
void splitwebp::FramesExporter::setOutputFilePrefix(const std::string& output_prefix) {
    mOutputFilePrefix = output_prefix;
}
uint8_t splitwebp::FramesExporter::getFrameSequencePadding() const {
    return mFrameSequencePadding;
}