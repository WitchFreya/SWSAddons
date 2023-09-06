params ["_title", "_subtitleLeft", "_subtitleMiddle", "_subtitleRight"];

[parseText format [" 
<t font='EtelkaMonospaceProBold' color='#3939bb' size='2' align='center'> 
%1</t><br /> 
<t font='EtelkaMonospaceProBold' size='1.1' align='center' color='#B41111'> 
%2</t> 
<t font='EtelkaMonospaceProBold' size='1.1' align='center' color='#EEEEEE'> 
 ::  %3 :: 
<t font='EtelkaMonospaceProBold' size='1.1' align='center' color='#535353'> 
 %4</t>", _title, _subtitleLeft, _subtitleMiddle, _subtitleRight], 
[0.2,0,0.6,0.19], 
nil, 
4, 
6, 
0.2 
] spawn BIS_fnc_textTiles;