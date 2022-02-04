#define PREPARE(_STR_) std::stringbuf s(_STR_); std::cin.rdbuf(&s); testing::internal::CaptureStdout();
#define CHECK(_STR_) const std::string outstr = testing::internal::GetCapturedStdout(); EXPECT_EQ(outstr, _STR_ "\n");
