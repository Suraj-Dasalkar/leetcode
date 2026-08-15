class Solution {
public:
    int maxArea(vector<int>& height) {
      int left = 0 ;
      int right =height.size()-1 ;
      int maxarea=0 ;
      int area = 0 ;
      while (left < right )
      {
      int height2=min(height[left],height[right]);
      int width = right - left ;
      area = width * height2 ;
      maxarea = max(area , maxarea);
      if(height[left]<height[right])
      {
        left ++ ;
      }
      else 
      {
        right -- ;
      }
      }
      return maxarea ;
    }
};