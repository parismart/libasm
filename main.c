#include "libasm.h"

int		main(void)
{
	int		result;
	int		fd;
	int		i;
	char	*var;
	char	*aux;

	printf("\033[1;33m|-----| FT_STRLEN |-----|\033[0m\n\n");

	result = ft_strlen("Paris Martinez Ruiz");
	printf("\033[1;33mFT_STRLEN #1: Value = 'Paris Martinez Ruiz' ---> Result: \033[0m<%d>\n", result);
	result = strlen("Paris Martinez Ruiz");
	printf("STRLEN #1: Value = 'Paris Martinez Ruiz' ---> Result: <%d>\n\n", result);
	
	result = ft_strlen("");
	printf("\033[1;33mFT_STRLEN #2: Value = '' ---> Result: \033[0m<%d>\n", result);
	result = strlen("");
	printf("STRLEN #2: Value = '' ---> Result: <%d>\n\n", result);
	
	result = ft_strlen("42Madrid");
	printf("\033[1;33mFT_STRLEN #3: Value = '42Madrid' ---> Result: \033[0m<%d>\n", result);
	result = strlen("42Madrid");
	printf("STRLEN #3: Value = '42Madrid' ---> Result: <%d>\n\n", result);
	
	result = ft_strlen("@#¢$¬/(&=?¿");
	printf("\033[1;33mFT_STRLEN #4: Value = '@#¢$¬/(&=?¿' ---> Result: \033[0m<%d>\n", result);
	result = strlen("@#¢$¬/(&=?¿");
	printf("STRLEN #4: Value = '@#¢$¬/(&=?¿' ---> Result: <%d>\n\n", result);

	result = ft_strlen("Lorem   \t   ipsum");
	printf("\033[1;33mFT_STRLEN #5: Value = 'Lorem   \\t   ipsum' ---> Result: \033[0m<%d>\n", result);
	result = strlen("Lorem   \t   ipsum");
	printf("STRLEN #5: Value = 'Lorem   \\t   ipsum' ---> Result: <%d>\n\n", result);



	printf("\n\033[1;34m|-----| FT_STRCPY |-----|\033[0m\n\n");

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "Paris Martinez Ruiz");
	printf("\033[1;34mFT_STRCPY #1: Value = 'Paris Martinez Ruiz' ---> Result: \033[0m<%s>\n\t\t\t\t\t\t\033[1;34m return: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "Paris Martinez Ruiz");
	printf("STRCPY #1: Value = 'Paris Martinez Ruiz' ---> Result: <%s>\n\t\t\t\t\t      return: <%s>\n\n", var, aux);
	free(var);

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "42@.Madrid");
	printf("\033[1;34mFT_STRCPY #2: Value = '42@.Madrid' ---> Result: \033[0m<%s>\n\t\t\t\t\t\033[1;34mreturn: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "42@.Madrid");
	printf("STRCPY #2: Value = '42@.Madrid' ---> Result: <%s>\n\t\t\t\t     return: <%s>\n\n", var, aux);
	free(var);

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "");
	printf("\033[1;34mFT_STRCPY #3: Value = '' ---> Result: \033[0m<%s>\n\t\t\t      \033[1;34mreturn: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "");
	printf("STRCPY #3: Value = '' ---> Result: <%s>\n\t\t\t   return: <%s>\n\n", var, aux);
	free(var);

	var = (char *)malloc(64);
	aux = ft_strcpy(var, "@#¢$¬/(&=?¿");
	printf("\033[1;34mFT_STRCPY #4: Value = '@#¢$¬/(&=?¿' ---> Result: \033[0m<%s>\n\t\t\t\t\t \033[1;34mreturn: \033[0m<%s>\n", var, aux);
	aux = strcpy(var, "@#¢$¬/(&=?¿");
	printf("STRCPY #4: Value = '@#¢$¬/(&=?¿' ---> Result: <%s>\n\t\t\t\t      return: <%s>\n\n", var, aux);
	free(var);



	printf("\n\033[1;31m|-----| FT_STRCMP |-----|\033[0m\n\n");

	result = ft_strcmp("Paris", "Paris");
	printf("\033[1;31mFT_STRCMP #1: value 1: 'Paris' - value 2: 'Paris' ---> result: \033[0m<%d>\n", result);
	result = strcmp("Paris", "Paris");
	printf("STRCMP #1: value 1: 'Paris' - value 2: 'Paris' ---> result: <%d>\n\n", result);

	result = ft_strcmp("", "");
	printf("\033[1;31mFT_STRCMP #1: value 1: 'empty' - value 2: 'empty' ---> result: \033[0m<%d>\n", result);
	result = strcmp("", "");
	printf("STRCMP #1: value 1: 'empty' - value 2: 'empty' ---> result: <%d>\n\n", result);

	result = ft_strcmp("4", "");
	printf("\033[1;31mFT_STRCMP #2: value 1: '4' - value 2: 'empty' ---> result: \033[0m<%d>\n", result);
	result = strcmp("4", "");
	printf("STRCMP #2: value 1: '4' - value 2: 'empty' ---> result: <%d>\n\n", result);

	result = ft_strcmp("Cuarenta y dos", "Cuarenta y dos ");
	printf("\033[1;31mFT_STRCMP #3: value 1: 'Cuarenta y dos' - value 2: 'Cuarenta y dos ' ---> result: \033[0m<%d>\n", result);
	result = strcmp("Cuarenta y dos", "Cuarenta y dos ");
	printf("STRCMP #3: value 1: 'Cuarenta y dos' - value 2: 'Cuarenta y dos ' ---> result: <%d>\n\n", result);

	result = ft_strcmp("&\t@\n#\n$\v?", "&\t@\n#\n$\v¿");
	printf("\033[1;31mFT_STRCMP #4: value 1: '&\\t@\\n#\\n$\\v?' - value 2: '&\\t@\\n#\\n$\\v¿' ---> result: \033[0m<%d>\n", result);
	result = strcmp("&\t@\n#\n$\v?", "&\t@\n#\n$\v¿");
	printf("STRCMP #4: value 1: '&\\t@\\n#\\n$\\v?' - value 2: '&\\t@\\n#\\n$\\v¿' ---> result: <%d>\n\n", result);



	printf("\n\033[1;32m|-----| FT_STRDUP |-----|\033[0m\n\n");

	aux = ft_strdup("Paris");
	printf("\033[1;32mFT_STRDUP #1: value 1: 'Paris' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("Paris");
	printf("STRDUP #1: value 1: 'Paris' ---> result: <%s>\n\n", aux);

	aux = ft_strdup("born2code");
	printf("\033[1;32mFT_STRDUP #2: value 1: 'born2code' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("born2code");
	printf("STRDUP #2: value 1: 'born2code' ---> result: <%s>\n\n", aux);

	aux = ft_strdup("");
	printf("\033[1;32mFT_STRDUP #3: value 1: '' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("");
	printf("STRDUP #3: value 1: '' ---> result: <%s>\n\n", aux);

	aux = ft_strdup("dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\n\0\r\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,");
	printf("\033[1;32mFT_STRDUP #4: value 1: 'dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\\n\\0\\r\\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,' ---> result: \033[0m<%s>\n", aux);
	aux = strdup("dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\n\0\r\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,");
	printf("STRDUP #4: value 1: 'dafkjsfjhvjkasdh,vnazdhgvjkasdhkgsmbhadgmfnajkdk,fbnaskjdhnfas jkdhfnh,ajsdh,fasjdgfbasmdngfbas,jdmgnfb,asjmdngfbasj,dfhn,ajfnaejkryhgi.akehr,ifkijlehwif,yrkgh,akfdaughkhlkshg,gjdfughkjehr,wgiwuekryhgw,kerugyh\\n\\0\\r\\ta.krfgjmwern,mnghfjk.vnbfhsgkfh,dmnbgsdkfg,' ---> result: <%s>\n\n", aux);



	printf("\n\033[1;35m|-----| FT_WRITE |-----|\033[0m\n\n");

	printf("\033[1;35mFT_WRITE #1: value 1: 'Paris' ---> return: \033[0m<%i>\n", result = ft_write(1, "Paris\n", 6));
	printf("\033[1;35mWRITE #1: value 1: 'Paris' ---> return: \033[0m<%i>\n", result = write(1, "Paris\n", 6));

	printf("\n");

	printf("\033[1;35mFT_WRITE #2: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = ft_write(1, "Born2Code\n", 11));
	printf("\033[1;35mWRITE #2: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = write(1, "Born2Code\n", 11));

	printf("\n");

	printf("\033[1;35mFT_WRITE #3: value 1: '' ---> return: \033[0m<%i>\n", result = ft_write(1, "", 3));
	printf("\033[1;35mWRITE #3: value 1: '' ---> return: \033[0m<%i>\n", result = write(1, "", 3));
	
	printf("\n\033[1;35m---> HANDLING ERRNO!\033[0m\n\n");

	printf("\033[1;35mFT_WRITE #4: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = ft_write(1, "Born2Code\n", -11));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");
	printf("\033[1;35mWRITE #4: value 1: 'Born2Code' ---> return: \033[0m<%i>\n", result = write(1, "Born2Code\n", -11));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");

	printf("\n");

	printf("\033[1;35mFT_WRITE #5: value 1: 'Hello World' ---> return: \033[0m<%i>\n", result = ft_write(10000, "Hello World\n", 12));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");
	printf("\033[1;35mWRITE #5: value 1: 'Hello World' ---> return: \033[0m<%i>\n", result = write(10000, "Hello World\n", 12));
	printf("Errno value is: %d\n", errno);
	//fprintf(stderr, "Error: %s\n", strerror(errno));
	perror("Error");



	printf("\n\033[1;36m|-----| FT_READ |-----|\033[0m\n\n");

	var = (char *)malloc(14);
	var[14] = '\0';
	fd = open("test.txt", O_RDONLY);
	printf("\033[1;36mFT_READ #1: ---> return: \033[0m<%i>\n\033[1;36m\t    ---> result: \033[0m<%s>\n", result = ft_read(0, var, 13), var);
	close(fd);

	var[14] = '\0';
	fd = open("test.txt", O_RDONLY);
	printf("\033[1;36mREAD #1: ---> return: \033[0m<%i>\n\033[1;36m\t ---> result:\033[0m<%s>\n", result = read(0, var, 13), var);
	close(fd);

	printf("\n\033[1;36m---> HANDLING ERRNO!\033[0m\n\n");

	var[14] = '\0';
	fd = open("test.tx", O_RDONLY);
	printf("\033[1;36mFT_READ #1: ---> return: \033[0m<%i>\n\033[1;36m\t    ---> result: \033[0m<%s>\n", result = ft_read(fd, var, 13), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");

	var[14] = '\0';
	fd = open("test.tx", O_RDONLY);
	printf("\033[1;36mREAD #1: ---> return: \033[0m<%i>\n\033[1;36m\t ---> result:\033[0m<%s>\n", result = read(fd, var, 13), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");
	printf("\n");

	var[14] = '\0';
	fd = open("test.txt", O_RDONLY);
	
	printf("\033[1;36mFT_READ #1: ---> return: \033[0m<%i>\n\033[1;36m\t    ---> result: \033[0m<%s>\n", result = ft_read(fd, var, -13), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");
	close(fd);

	var[14] = '\0';
	fd = open("test.txt", O_RDONLY);
	printf("\033[1;36mREAD #1: ---> return: \033[0m<%i>\n\033[1;36m\t ---> result:\033[0m<%s>\n", result = read(fd, var, -13), var);
	printf("Errno value is: %d\n", errno);
	perror("Error");
	close(fd);
	return (0);
}
