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

#ifndef SPLITWEBP_FRAMESEXPORTER_H
#define SPLITWEBP_FRAMESEXPORTER_H

#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>

namespace splitwebp {
    class FramesExporter {
    protected:
        std::vector<cv::Mat> mFrameList;
        std::string mOutputFilePrefix;
        std::string mOutputFileExtension;
        uint8_t mFrameSequencePadding;
    public:
        FramesExporter() {}
        ~FramesExporter() {}
        virtual void loadFrames(const std::vector<cv::Mat>& frameList);
        virtual std::string getOutputFileExtension() const;
        virtual std::string getOutputFilePrefix() const;
        virtual void setOutputFileExtension(const std::string&);
        virtual void setOutputFilePrefix(const std::string&);
        virtual uint8_t getFrameSequencePadding() const;
        virtual void exportFrames() = 0;
    };
}
#endif //SPLITWEBP_FRAMESEXPORTER_H
