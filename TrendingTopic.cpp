// Trending topic class
class TrendingTopic {
public:
    TrendingTopic(const std::string& topic, int score) : topic(topic), score(score) {}
    std::string getTopic() const { return topic; }
    int getScore() const { return score; }
private:
    std::string topic;
    int score;
};

// Comparison function for priority queue
struct CompareTrendingTopics {
    bool operator()(const TrendingTopic& t1, const TrendingTopic& t2) {
        return t1.getScore() < t2.getScore();
    }
};

