// Social graph class
class SocialGraph {
public:
    // Add a user to the graph
    void addUser(const std::string& username) {
        users[username] = UserProfile(username);
    }

    // Add a follower relationship between users
    void addFollower(const std::string& follower, const std::string& followee) {
        if (users.find(follower) != users.end() && users.find(followee) != users.end()) {
            followers[followee].push_back(follower);
        }
    }

    // Get followers of a user
    std::vector<std::string> getFollowers(const std::string& username) const {
        if (users.find(username) != users.end()) {
            return followers.at(username);
        }
        return std::vector<std::string>();
    }

    // Check if a user exists in the graph
    bool hasUser(const std::string& username) const {
        return users.find(username) != users.end();
    }

private:
    std::unordered_map<std::string, UserProfile> users;
    std::unordered_map<std::string, std::vector<std::string>> followers;
};
