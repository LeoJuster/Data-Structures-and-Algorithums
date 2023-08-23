#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <queue>

// User profile class
class UserProfile {
public:
    UserProfile(const std::string& username) : username(username) {}
    std::string getUsername() const { return username; }
private:
    std::string username;
    // Other user-specific data
};
