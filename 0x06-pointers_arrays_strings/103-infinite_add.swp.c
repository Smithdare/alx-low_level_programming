b0VIM 8.1              �+  root                                    33c5ec5b9d9d                            ~root/alx-low_level_programming/0x06-pointers_arrays_strings/103-infinite_add                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     U3210    #"! U                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 tp           �                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ad    �     �       �  �  �  �  �  �  p  o  n  m  i  h  /  .  �  �  �  �  �  �  ]  \  Y  X      �  �  �  �  �  �  �  �  �  �  �  �  h  g  d  c  @  ?  0  /  
  	  �  �  �  �  �  �  �  �  �  �  �  �  �  �  v  u  r  q  p  o  Q  P  M  L  0  /  
  	  �  �  �  �  �  �  �  �  �  �  �  �  �  �  �  �  �  �  j  i  [  Z  Y  X  =  <  :  9  5  4      �
  �
  �
  �
  �
  �
  {
  z
  w
  v
  9
  8
  
  
  	
  
  �	  �	  �	  �	  �	  �	  �	  �	  x	  w	  k	  j	  i	  h	  ?	  >	  2	  1	  0	  �  �  �  �  �  �  �  �  �  �  �    ~  }  |  {  z  y                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               }}}}}}}}}}}} 	return (add_strings(n1, n2, r, --size_r)); 	*(r + size_r) = '\0'; 	n2 += n2_len - 1; 	n1 += n1_len - 1; 		return (0); 	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)   		n2_len++;  	for (index = 0; *(n2 + index); index++)    		n1_len++;  	for (index = 0; *(n1 + index); index++)    	int index, n1_len = 0, n2_len = 0;  {  char *infinite_add(char *n1, char *n2, char *r, int size_r)   */   *         If r cannot store the sum - 0.   * Return: If r can store the sum - a pointer to the result.   *   * @size_r: The buffer size.   * @r: The buffer to store the result.   * @n2: The second number to be added.   * @n1: The first number to be added.   * infinite_add - Adds two numbers.  /**  }  	return (r + r_index + 1);    		return (0);  	else if (tens && r_index < 0)    	}  		return (r + r_index);  		*(r + r_index) = (tens % 10) + '0';  	{  	if (tens && r_index >= 0)    	}  		tens = num / 10;  		*(r + r_index) = (num % 10) + '0';  		num = (*n2 - '0') + tens;  	{  	for (; *n2; n2--, r_index--)    	}  		tens = num / 10;  		*(r + r_index) = (num % 10) + '0';  		num = (*n1 - '0') + tens;  	{  	for (; *n1; n1--, r_index--)    	}  		tens = num / 10;  		*(r + r_index) = (num % 10) + '0';  		num += tens;  		num = (*n1 - '0') + (*n2 - '0');  	{  	for (; *n1 && *n2; n1--, n2--, r_index--)    	int num, tens = 0;  {  char *add_strings(char *n1, char *n2, char *r, int r_index)   */   *         If r cannot store the sum - 0.   * Return: If r can store the sum - a pointer to the result.   *   * @r_index: The current index of the buffer.   * @r: The buffer to store the result.   * @n2: The string containing the second number to be added.   * @n1: The string containing the first number to be added.   * add_strings - Adds the numbers stored in two strings.  /**    char *infinite_add(char *n1, char *n2, char *r, int size_r);  char *add_strings(char *n1, char *n2, char *r, int r_index);    #include "main.h" 