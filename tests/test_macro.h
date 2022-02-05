#define PREPARE(_STR_) std::stringbuf s(_STR_); std::cin.rdbuf(&s); testing::internal::CaptureStdout();
#define PREPARE_F(_FILE_) std::ifstream ifs(_FILE_); if (!ifs) { std::cerr << "open fail." << std::endl; ASSERT_TRUE(false); } std::cin.rdbuf(ifs.rdbuf()); testing::internal::CaptureStdout();
#define CHECK(_STR_) const std::string outstr = testing::internal::GetCapturedStdout(); EXPECT_EQ(outstr, _STR_ "\n");
