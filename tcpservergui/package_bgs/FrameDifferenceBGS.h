#pragma once

#include <iostream>

#include "IBGS.h"

class FrameDifferenceBGS : public IBGS
{
private:
  bool firstTime;
  cv::Mat img_input_prev;
  cv::Mat img_foreground;
  bool enableThreshold;
  int threshold;
  bool showOutput;

public:
  FrameDifferenceBGS();
  ~FrameDifferenceBGS();

  void process(const cv::Mat &img_input, cv::Mat &img_output, cv::Mat &img_bgmodel);

private:
  void saveConfig();
  void loadConfig();
};
