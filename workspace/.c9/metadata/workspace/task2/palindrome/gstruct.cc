{"filter":false,"title":"gstruct.cc","tooltip":"/task2/palindrome/gstruct.cc","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":47,"column":0},"end":{"row":48,"column":13},"action":"remove","lines":["    GstructIt a(c.findpos(0));     //isn't this get(0) because findpos(0) is private in container.h","    return a;"],"id":2},{"start":{"row":47,"column":0},"end":{"row":56,"column":5},"action":"insert","lines":["    if (size()>0)","    {","        GstructIt a(c.findpos(0));     //isn't this get(0) because findpos(0) is private in container.h","        return a;","    }","    else","    {","        GstructIt a(NULL);","        return a;","    }"]}]]},"ace":{"folds":[],"scrolltop":420,"scrollleft":0,"selection":{"start":{"row":49,"column":47},"end":{"row":49,"column":47},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":22,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1459913681463,"hash":"2283f12fbb2ae377679188d4725ff7733cf88a95"}