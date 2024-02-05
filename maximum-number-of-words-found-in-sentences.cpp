class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN ;
        for(int i=0 ;i<sentences.size() ;i++){
        //     string str= sentences[i] ;
        //     int count=0 ;
        //     int j=0 ;
        //     while(str[j]!='\0'){
        //         if(str[j]==' '){
        //             count++;
        //         }
        //         j++;
        //     }
        //     maxi = max(maxi,count+1);
        // }
        // return maxi ;
        int count=1 ;
        for(int j=0 ;j <sentences[i].size() ;j++){
             if(sentences[i][j]==' ')  {
                 count++ ;
             }
        }
       maxi = max(maxi,count);
    }
    return maxi ;
    }
};
