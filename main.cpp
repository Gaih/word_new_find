// C++版本实现快排
#include "src/wordSort.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<int> numList = {100, 34, 98, 56, 67, 34, 5, 7, 2};
    radix(numList);
    for(auto n : numList) {
        cout << n << " ";
    }
    cout << endl;
    string demoStr1 = "在全党开展不忘初心牢记使命主题教育是党的十九大作出的重大决策党中央对此高度重视做了精心准备周密组织从去年5月底开始主题教育自上而下分两批进行目前已基本结束各级党组织有力推动广大党员干部积极投入人民群众热情支持整个主题教育特点鲜明扎实紧凑达到了预期目的取得了重大成果一是各级党组织和广大党员干部深入学习实践新时代中国特色社会主义思想提高了知信行合一能力广大党员干部带着责任带着问题读原著学原文通过中心组学习举办读书班集中交流研讨等形式深学细悟研机析理加深理解和领会推动学习往深里走往实里走强化理想信念和使命担当较好解决了学习不深入落实不到底的问题大家都认识到科学理论是我们推动工作解决问题的金钥匙越学越觉得有信心越学越觉得有力量二是各级党组织和广大党员干部思想政治受到洗礼和锤炼增强了守初心担使命的思想自觉和行动自觉这次主题教育既抓思想引导又抓行为规范广大党员干部对照党中央决策部署对照党章党规对照人民群众新期待对照先进典型身边榜样找差距摆问题坚定了对马克思主义的信仰对中国特色社会主义的信念通过认真学习党史新中国史深入开展革命传统教育重温入党誓词重忆入党经历重问入党初心召开专题民主生活会组织生活会开展批评和自我批评受到一次严肃的党内政治生活锻炼通过这次主题教育广大党员干部信仰之基更加牢固精神之钙更加充足";
    string demoStr = "hellohellohellolvlvlvgoogoodgood";
    string demoStr2 = "习近平中国中国共产党不忘初心共产党习近平主席";
    WordSort ws;
    vector<string> cutWordList = ws.string2Arr(demoStr2);
    ws.radixSort(cutWordList);
    //ws.sortArr(cutWordList);
    //vector<int> lcpArr = {1, 1, 3, 2, 1, 0, 0, 2,0};
    //ws.scanLcp(lcpArr, lcpArr.size(), 0, 1, 5);

}
