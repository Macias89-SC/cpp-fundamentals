// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

#pragma once
#include <string>

enum class ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(const ErrorCode& EnumCode);
bool doPasswordsMatch(const std::string& pass1, const std::string& pass2);
ErrorCode checkPasswordRules(const std::string& pass);
ErrorCode checkPassword(const std::string& pass, const std::string& repPass);
bool checkSpecialChar(const std::string& pass);