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

# FINAL:
c90 & c89 standards, since they are the oldest from the releases, seem to be<br>
sensitive to type (syntax)bugs, while newer releases dont have that problem.