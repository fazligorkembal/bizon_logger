#ifndef BIZON_LOGGER_HPP
#define BIZON_LOGGER_HPP

#include "rclcpp/rclcpp.hpp"
#define ANSI_COLOR_RESET    "\x1b[0m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_WHITE   "\x1b[37m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_CYAN    "\x1b[36m"


namespace bizon_logger{

void serialize_message(std::string& message, std::vector<std::string> messages)
{
    for (auto& msg : messages)
    {
        message += msg;
    }
}

void message_debug(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO(logger, ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET, message.c_str());
}

void message_debug_once(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO_ONCE(logger, ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET, message.c_str());
}

void message_info(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO(logger, ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET, message.c_str());
}

void message_info_once(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO_ONCE(logger, ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET, message.c_str());
}

void message_warn(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO(logger, ANSI_COLOR_YELLOW "%s" ANSI_COLOR_RESET, message.c_str());
}

void message_warn_once(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO_ONCE(logger, ANSI_COLOR_YELLOW "%s" ANSI_COLOR_RESET, message.c_str());
}

void message_error(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO(logger, ANSI_COLOR_RED "%s" ANSI_COLOR_RESET, message.c_str());
}

void message_error_once(rclcpp::Logger logger, std::vector<std::string> messages)
{
    std::string message;
    serialize_message(message, messages);
    RCLCPP_INFO_ONCE(logger, ANSI_COLOR_RED "%s" ANSI_COLOR_RESET, message.c_str());
}

} // namespace bizon_logger

#endif // BIZON_LOGGER_HPP