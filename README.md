XOR_checksum

Checksums created using XOR are quite common in AIS and GPS serial communication.

XOR or exclusive OR as it is properly called, only produces a 1 if there is a difference between the respective bits of two bytes and zero(0) if the bits have the same value.

Example:
1010 and 0111 produces 1101 because, from the left, bits 1, 2 and 4 are different, and bits 3 the same.

So, how do we get a checksum of 106 in the sketch, for the word "arduino"?

The binary values of "a" and "r" are compared to get the first xor result value, then the binary value of "d" is comapared to the xor result. This is repeated until the binary value of "o" is compared to the previous xor result.The final xor result is then the checksum.

<table>
  <tr>
    <th>Chr decimal</th>
    <th>ASCII decimal</th> 
    <th>Binary</th>
  </tr>
  <tr>
    <td>a</td>
    <td>97</td> 
    <td>01100001</td>
  </tr>
  <tr>
    <td>r</td>
    <td>114</td> 
    <td>01110010</td>
  </tr>
  <tr>
    <td>xor result</td>
    <td>19</td> 
    <td>00010011</td>
  </tr>
  <tr>
    <td>d</td>
    <td>100</td> 
    <td>01100100</td>
  </tr>
  <tr>
    <td>xor result</td>
    <td>119</td> 
    <td>01110111</td>
  </tr>
  <tr>
    <td>u</td>
    <td>117</td> 
    <td>01110101</td>
  </tr>
  <tr>
    <td>xor result</td>
    <td>2</td> 
    <td>00000010</td>
  </tr>
  <tr>
    <td>i</td>
    <td>105</td> 
    <td>01101001</td>
  </tr>
  <tr>
    <td>xor result</td>
    <td>107</td> 
    <td>01101011</td>
  </tr>
  <tr>
    <td>n</td>
    <td>110</td> 
    <td>01101110</td>
  </tr>
  <tr>
    <td>xor result</td>
    <td>5</td> 
    <td>00000101</td>
  </tr>
  <tr>
    <td>o</td>
    <td>111</td> 
    <td>01101111</td>
  </tr>
  <tr>
    <td>xor result</td>
    <td>106</td> 
    <td>01101010</td>
  </tr>
</table>
