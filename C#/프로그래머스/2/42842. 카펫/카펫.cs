using System;

public class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = new int[] {};
        // 전체 타일 수 = 타일 합친 수
        // wh = brown + yellow
        // (w-2)(h-2) = yellow
        int w, h;
        int totalNum = brown + yellow;
        for(int i = 3; i <= Math.Sqrt(totalNum); i++) {
            if(totalNum % i == 0) {
                h = i;
                w = totalNum / i;
                if ((w - 2) * (h - 2) == yellow)
                    return new int[] { w, h };
            }
        }
        return answer;
    }
}