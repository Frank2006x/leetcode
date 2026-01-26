// Last updated: 1/26/2026, 8:37:25 AM
class FoodRatings {
public:
    unordered_map<string,pair<string,int>> foodmap;
    unordered_map<string,set<pair<int,string>>> cusmap;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++){
            foodmap[foods[i]]={cuisines[i],ratings[i]}; 
            cusmap[cuisines[i]].insert({-ratings[i],foods[i]});
        }
    }

    
    void changeRating(string food, int newRating) {
        auto [cuisine, oldRating] = foodmap[food];
        cusmap[cuisine].erase({-oldRating, food});
        foodmap[food].second = newRating;
        cusmap[cuisine].insert({-newRating, food});

    }
    
    string highestRated(string cuisine) {
        return cusmap[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */