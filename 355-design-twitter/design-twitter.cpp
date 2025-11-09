class Twitter {
    private:
    int timeStamp = 0;
    unordered_map<int, vector<pair<int,int>>> tweets;
    unordered_map<int, unordered_set<int>> follows;


public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({timeStamp++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
         priority_queue< vector<int> > maxHeap;
        vector<int> ans;

       
        follows[userId].insert(userId);

       
        for (int f : follows[userId]) {
            auto &t = tweets[f];
            if (!t.empty()) {
                int lastIndex = t.size() - 1;
                maxHeap.push({t[lastIndex].first, t[lastIndex].second, f, lastIndex});
            }
        }

        
        while (!maxHeap.empty() && ans.size() < 10) {
            auto top = maxHeap.top();
            maxHeap.pop();

            int time = top[0];
            int tweetId = top[1];
            int user = top[2];
            int idx = top[3];

            ans.push_back(tweetId);

            
            if (idx - 1 >= 0) {
                auto &t = tweets[user];
                maxHeap.push({t[idx-1].first, t[idx-1].second, user, idx-1});
            }
        }

        return ans;
    }
    
    void follow(int followerId, int followeeId) {
         if (followerId != followeeId)
            follows[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
           if (followerId != followeeId)
            follows[followerId].erase(followeeId);
    }
};

