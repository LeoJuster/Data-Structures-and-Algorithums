// Priority queue for trending topics
class TrendingTopicsQueue {
public:
    // Add a topic to the queue
    void addTopic(const TrendingTopic& topic) {
        topics.push(topic);
    }

    // Get the top trending topic
    TrendingTopic getTopTopic() {
        TrendingTopic top = topics.top();
        topics.pop();
        return top;
    }

    // Check if the queue is empty
    bool isEmpty() const {
        return topics.empty();
    }

private:
    std::priority_queue<TrendingTopic, std::vector<TrendingTopic>, CompareTrendingTopics> topics;
};

// Social media analytics application class
class SocialMediaAnalyticsApp {
public:
    SocialMediaAnalyticsApp() {}

    // Create a new user
    void createUser(const std::string& username) {
        socialGraph.addUser(username);
    }

    // Establish a follower relationship between users
    void followUser(const std::string& follower, const std::string& followee) {
        if (socialGraph.hasUser(follower) && socialGraph.hasUser(followee)) {
            socialGraph.addFollower(follower, followee);
        }
    }

    // Analyze and display trending topics
    void analyzeTrendingTopics() {
        TrendingTopicsQueue trendingQueue;
        trendingQueue.addTopic(TrendingTopic("#topic1", 50));
        trendingQueue.addTopic(TrendingTopic("#topic2", 30));
        trendingQueue.addTopic(TrendingTopic("#topic3", 70));

        std::cout << "Top Trending Topics:\n";
        while (!trendingQueue.isEmpty()) {
            TrendingTopic topTopic = trendingQueue.getTopTopic();
            std::cout << topTopic.getTopic() << " (Score: " << topTopic.getScore() << ")\n";
        }
    }

private:
    SocialGraph socialGraph;
};
