{"changed":true,"filter":false,"title":"trash.cc","tooltip":"/task2/evenodd/trash.cc","value":"// pointers\n#include <iostream>\nusing std::cout;\nusing std::endl;\n\nint main() {\n    int someint = 1;\n    int someint2 = 2;\n    int *someint_p;\n    \n    someint_p = &someint; //someintp contains the address for someint\n    cout << (*someint_p) << endl; //will output the value of someint\n    \n    (*someint_p) = 2; //store 2 into whatever someintp is pointing to\n    cout << someint << endl;\n    \n    int& someint_r = someint; // int *someint_p = &someint;\n    cout << someint_r << endl; // cout << (*someint_p) << endl;\n    someint_r = 3; // (*someint_p) = 3;\n    cout << someint << endl;\n    \n    \n}\n\nostream& operator<<(ostream& o, const Gstruct& s) // o << s\n{\n    o << \"[ \";\n    for (GstructIt git = s.begin(); git != s.end(); git++)\n    {\n        o << *git << \", \";\n    }\n    o << \" ]\";\n    return o;\n}\n\n(cout << g) << f;\n\ncout << g;\ncout << f;\n\n\nType& T;\n\nconst Type& T;\n\n\n//THIS IS NOT ALLOWED\n//ILLEGAL\nint& f()\n{\n    int x = 10;\n    return x;\n}\n\nclass P { \n    int x;\n    do_thing() { \n        cout << (this->x); // same as cout << x\n    }    \n}\n\n\n\nP p1, p2;\n","undoManager":{"mark":-1024,"position":100,"stack":[[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"insert","lines":["x"],"id":1565}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"remove","lines":["x"],"id":1566}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"insert","lines":["x"],"id":1567}],[{"start":{"row":57,"column":9},"end":{"row":57,"column":10},"action":"insert","lines":[" "],"id":1568}],[{"start":{"row":57,"column":9},"end":{"row":57,"column":10},"action":"remove","lines":[" "],"id":1569}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"remove","lines":["x"],"id":1570}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"insert","lines":["x"],"id":1571}],[{"start":{"row":57,"column":9},"end":{"row":57,"column":10},"action":"insert","lines":[";"],"id":1572}],[{"start":{"row":57,"column":9},"end":{"row":57,"column":10},"action":"remove","lines":[";"],"id":1573}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"remove","lines":["x"],"id":1574}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"insert","lines":["t"],"id":1575}],[{"start":{"row":57,"column":9},"end":{"row":57,"column":10},"action":"insert","lines":["h"],"id":1576}],[{"start":{"row":57,"column":10},"end":{"row":57,"column":11},"action":"insert","lines":["i"],"id":1577}],[{"start":{"row":57,"column":11},"end":{"row":57,"column":12},"action":"insert","lines":["s"],"id":1578}],[{"start":{"row":57,"column":12},"end":{"row":57,"column":13},"action":"insert","lines":["-"],"id":1579}],[{"start":{"row":57,"column":13},"end":{"row":57,"column":14},"action":"insert","lines":[">"],"id":1580}],[{"start":{"row":57,"column":14},"end":{"row":57,"column":15},"action":"insert","lines":["x"],"id":1581}],[{"start":{"row":57,"column":15},"end":{"row":57,"column":16},"action":"insert","lines":[";"],"id":1582}],[{"start":{"row":57,"column":16},"end":{"row":57,"column":17},"action":"insert","lines":[" "],"id":1583}],[{"start":{"row":57,"column":17},"end":{"row":57,"column":18},"action":"insert","lines":["/"],"id":1584}],[{"start":{"row":57,"column":18},"end":{"row":57,"column":19},"action":"insert","lines":["/"],"id":1585}],[{"start":{"row":57,"column":19},"end":{"row":57,"column":20},"action":"insert","lines":[" "],"id":1586}],[{"start":{"row":57,"column":20},"end":{"row":57,"column":21},"action":"insert","lines":["s"],"id":1587}],[{"start":{"row":57,"column":21},"end":{"row":57,"column":22},"action":"insert","lines":["a"],"id":1588}],[{"start":{"row":57,"column":22},"end":{"row":57,"column":23},"action":"insert","lines":["m"],"id":1589}],[{"start":{"row":57,"column":23},"end":{"row":57,"column":24},"action":"insert","lines":["e"],"id":1590}],[{"start":{"row":57,"column":24},"end":{"row":57,"column":25},"action":"insert","lines":[" "],"id":1591}],[{"start":{"row":57,"column":25},"end":{"row":57,"column":26},"action":"insert","lines":["a"],"id":1592}],[{"start":{"row":57,"column":26},"end":{"row":57,"column":27},"action":"insert","lines":["s"],"id":1593}],[{"start":{"row":57,"column":27},"end":{"row":57,"column":28},"action":"insert","lines":[" "],"id":1594}],[{"start":{"row":57,"column":28},"end":{"row":57,"column":29},"action":"insert","lines":["x"],"id":1595}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":9},"action":"insert","lines":["c"],"id":1596}],[{"start":{"row":57,"column":9},"end":{"row":57,"column":10},"action":"insert","lines":["o"],"id":1597}],[{"start":{"row":57,"column":10},"end":{"row":57,"column":11},"action":"insert","lines":["u"],"id":1598}],[{"start":{"row":57,"column":11},"end":{"row":57,"column":12},"action":"insert","lines":["t"],"id":1599}],[{"start":{"row":57,"column":12},"end":{"row":57,"column":13},"action":"insert","lines":[" "],"id":1600}],[{"start":{"row":57,"column":13},"end":{"row":57,"column":14},"action":"insert","lines":["<"],"id":1601}],[{"start":{"row":57,"column":14},"end":{"row":57,"column":15},"action":"insert","lines":[","],"id":1602}],[{"start":{"row":57,"column":15},"end":{"row":57,"column":16},"action":"insert","lines":[" "],"id":1603}],[{"start":{"row":57,"column":15},"end":{"row":57,"column":16},"action":"remove","lines":[" "],"id":1604}],[{"start":{"row":57,"column":14},"end":{"row":57,"column":15},"action":"remove","lines":[","],"id":1605}],[{"start":{"row":57,"column":14},"end":{"row":57,"column":15},"action":"insert","lines":["<"],"id":1606}],[{"start":{"row":57,"column":15},"end":{"row":57,"column":16},"action":"insert","lines":[" "],"id":1607}],[{"start":{"row":57,"column":35},"end":{"row":57,"column":36},"action":"insert","lines":[" "],"id":1608}],[{"start":{"row":57,"column":36},"end":{"row":57,"column":37},"action":"insert","lines":["c"],"id":1609}],[{"start":{"row":57,"column":37},"end":{"row":57,"column":38},"action":"insert","lines":["o"],"id":1610}],[{"start":{"row":57,"column":38},"end":{"row":57,"column":39},"action":"insert","lines":["u"],"id":1611}],[{"start":{"row":57,"column":39},"end":{"row":57,"column":40},"action":"insert","lines":["t"],"id":1612}],[{"start":{"row":57,"column":40},"end":{"row":57,"column":41},"action":"insert","lines":[" "],"id":1613}],[{"start":{"row":57,"column":41},"end":{"row":57,"column":42},"action":"insert","lines":["<"],"id":1614}],[{"start":{"row":57,"column":42},"end":{"row":57,"column":43},"action":"insert","lines":["<"],"id":1615}],[{"start":{"row":57,"column":16},"end":{"row":57,"column":17},"action":"insert","lines":["("],"id":1616}],[{"start":{"row":57,"column":24},"end":{"row":57,"column":25},"action":"insert","lines":[")"],"id":1617}],[{"start":{"row":60,"column":0},"end":{"row":61,"column":0},"action":"insert","lines":["",""],"id":1618}],[{"start":{"row":61,"column":0},"end":{"row":62,"column":0},"action":"insert","lines":["",""],"id":1619}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"insert","lines":["*"],"id":1620}],[{"start":{"row":61,"column":1},"end":{"row":61,"column":2},"action":"insert","lines":["t"],"id":1621}],[{"start":{"row":61,"column":2},"end":{"row":61,"column":3},"action":"insert","lines":["h"],"id":1622}],[{"start":{"row":61,"column":3},"end":{"row":61,"column":4},"action":"insert","lines":["i"],"id":1623}],[{"start":{"row":61,"column":4},"end":{"row":61,"column":5},"action":"insert","lines":["s"],"id":1624}],[{"start":{"row":61,"column":4},"end":{"row":61,"column":5},"action":"remove","lines":["s"],"id":1625}],[{"start":{"row":61,"column":3},"end":{"row":61,"column":4},"action":"remove","lines":["i"],"id":1626}],[{"start":{"row":61,"column":2},"end":{"row":61,"column":3},"action":"remove","lines":["h"],"id":1627}],[{"start":{"row":61,"column":1},"end":{"row":61,"column":2},"action":"remove","lines":["t"],"id":1628}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"remove","lines":["*"],"id":1629}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"insert","lines":["s"],"id":1630}],[{"start":{"row":61,"column":1},"end":{"row":61,"column":2},"action":"insert","lines":["o"],"id":1631}],[{"start":{"row":61,"column":2},"end":{"row":61,"column":3},"action":"insert","lines":["m"],"id":1632}],[{"start":{"row":61,"column":3},"end":{"row":61,"column":4},"action":"insert","lines":["e"],"id":1633}],[{"start":{"row":61,"column":4},"end":{"row":61,"column":5},"action":"insert","lines":["i"],"id":1634}],[{"start":{"row":61,"column":5},"end":{"row":61,"column":6},"action":"insert","lines":["n"],"id":1635}],[{"start":{"row":61,"column":6},"end":{"row":61,"column":7},"action":"insert","lines":["t"],"id":1636}],[{"start":{"row":61,"column":7},"end":{"row":61,"column":8},"action":"insert","lines":["_"],"id":1637}],[{"start":{"row":61,"column":8},"end":{"row":61,"column":9},"action":"insert","lines":["p"],"id":1638}],[{"start":{"row":61,"column":8},"end":{"row":61,"column":9},"action":"remove","lines":["p"],"id":1639}],[{"start":{"row":61,"column":7},"end":{"row":61,"column":8},"action":"remove","lines":["_"],"id":1640}],[{"start":{"row":61,"column":6},"end":{"row":61,"column":7},"action":"remove","lines":["t"],"id":1641}],[{"start":{"row":61,"column":5},"end":{"row":61,"column":6},"action":"remove","lines":["n"],"id":1642}],[{"start":{"row":61,"column":4},"end":{"row":61,"column":5},"action":"remove","lines":["i"],"id":1643}],[{"start":{"row":61,"column":3},"end":{"row":61,"column":4},"action":"remove","lines":["e"],"id":1644}],[{"start":{"row":61,"column":2},"end":{"row":61,"column":3},"action":"remove","lines":["m"],"id":1645}],[{"start":{"row":61,"column":1},"end":{"row":61,"column":2},"action":"remove","lines":["o"],"id":1646}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"remove","lines":["s"],"id":1647}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"insert","lines":["*"],"id":1648}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"remove","lines":["*"],"id":1649}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"insert","lines":["t"],"id":1650}],[{"start":{"row":61,"column":1},"end":{"row":61,"column":2},"action":"insert","lines":["h"],"id":1651}],[{"start":{"row":61,"column":2},"end":{"row":61,"column":3},"action":"insert","lines":["i"],"id":1652}],[{"start":{"row":61,"column":3},"end":{"row":61,"column":4},"action":"insert","lines":["s"],"id":1653}],[{"start":{"row":61,"column":3},"end":{"row":61,"column":4},"action":"remove","lines":["s"],"id":1654}],[{"start":{"row":61,"column":2},"end":{"row":61,"column":3},"action":"remove","lines":["i"],"id":1655}],[{"start":{"row":61,"column":1},"end":{"row":61,"column":2},"action":"remove","lines":["h"],"id":1656}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"remove","lines":["t"],"id":1657}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":1},"action":"insert","lines":["*"],"id":1658}],[{"start":{"row":61,"column":1},"end":{"row":61,"column":2},"action":"insert","lines":["t"],"id":1659}],[{"start":{"row":61,"column":2},"end":{"row":61,"column":3},"action":"insert","lines":["h"],"id":1660}],[{"start":{"row":61,"column":3},"end":{"row":61,"column":4},"action":"insert","lines":["i"],"id":1661}],[{"start":{"row":61,"column":4},"end":{"row":61,"column":5},"action":"insert","lines":["s"],"id":1662}],[{"start":{"row":61,"column":0},"end":{"row":61,"column":5},"action":"remove","lines":["*this"],"id":1663}],[{"start":{"row":60,"column":0},"end":{"row":61,"column":0},"action":"remove","lines":["",""],"id":1664}],[{"start":{"row":60,"column":0},"end":{"row":61,"column":0},"action":"insert","lines":["",""],"id":1665}]]},"ace":{"folds":[],"scrolltop":497,"scrollleft":0,"selection":{"start":{"row":61,"column":0},"end":{"row":61,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":26,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1459913128908}