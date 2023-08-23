// Main function
int main() {
    // Create an instance of the social media analytics app
    SocialMediaAnalyticsApp app;

    // Create users
    app.createUser("user1");
    app.createUser("user2");
    app.createUser("user3");

    // Establish follower relationships
    app.followUser("user1", "user2");
    app.followUser("user2", "user3");
