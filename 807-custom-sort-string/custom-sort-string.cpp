class Solution {
public:


string customSortString(string order, string s) {
    // Custom comparison function
    auto compare = [&order](char a, char b) {
        return order.find(a) < order.find(b);
    };

    // Sorting s based on the order in 'order'
    std::sort(s.begin(), s.end(), compare);

    return s;
}


};