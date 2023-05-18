# gcc 6.3.0: 
### without standard specification:
- Compiled without problems

### with standard specification :
> std=c99 nothing <br>
>std=c90 error: ISO C90 forbids mixed declarations<br>
>std=c89 error: ISO C90 forbids mixed declarations<br>
>std=c11 nothing

# gcc 12.1.0:
### without standard specification:
- Compiled without problems
### with standard specification :
> std=c99 nothing <br>
>std=c90 error: ISO C90 forbids mixed declarations  <br>
>std=c89 error: ISO C90 forbids mixed declarations<br>
>std=c18: nothing<br>
>std=c11 nothing<br>
>std=gnu11: nothing