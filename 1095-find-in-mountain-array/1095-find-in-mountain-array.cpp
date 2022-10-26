/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int ans=-1;
        int s=peak(mountainArr);
        ans=search(target,mountainArr,0,s);
        if(ans==-1)ans=search(target,mountainArr,s+1,mountainArr.length()-1);
        return ans;
    }
    int peak(MountainArray &mountainArr){
        int l=0,h=mountainArr.length()-1,mid;
        while(l<h){
            mid=(l+h)/2;
            if(mountainArr.get(mid)>mountainArr.get(mid+1))h=mid;
            else l=mid+1;
        }
        return l; 
    }
    int search(int target,MountainArray &mountainArr,int start,int end){
        bool isacs= mountainArr.get(start)<mountainArr.get(end);
        while(start<=end){
            int mid=(start+end)/2;
            if(mountainArr.get(mid)==target)return mid;
            if(isacs){
            if(mountainArr.get(mid)>target)end=mid-1;
            else start=mid+1;
            }
            else{
                if(mountainArr.get(mid)<target)end=mid-1;
            else start=mid+1;
            }
        }
        return -1;
    }
};