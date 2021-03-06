/* clips_or.h
 * Header for functions from CLIPS explicitly reimplemented for PyCLIPS:
 * depending on how CLIPS changes in time, some functions may appear or
 * disappear (or be conditionally defined) from here.
 * $Id: clips_or.h 340 2008-02-21 00:39:34Z Franz $
 */


#ifndef BOOLEAN
#ifdef intBool
#define BOOLEAN intBool
#else /* intBool */
#define BOOLEAN int
#endif /* intBool */
#endif  /* BOOLEAN */


#define Matches_PY(s,a) EnvMatches_PY(GetCurrentEnvironment(),s,a)
#define Clear_PY() EnvClear_PY(GetCurrentEnvironment())
#define GetNextInstanceInClassAndSubclasses_PY(a,b,c) \
        EnvGetNextInstanceInClassAndSubclasses_PY(GetCurrentEnvironment(),a,b,c)


LOCALE BOOLEAN EnvMatches_PY(void *,char *,void *);
LOCALE BOOLEAN EnvClear_PY(void *);
LOCALE void *EnvGetNextInstanceInClassAndSubclasses_PY(
    void *,void *,void *,DATA_OBJECT *);


/* end. */
