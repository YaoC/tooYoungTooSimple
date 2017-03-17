class EnumOne
{
	enum AccountType
	{
	    SAVING, FIXED, CURRENT;
	    private AccountType()
	    {
	        System.out.println("It is a account type");
	    }
	}
    public static void main(String[]args)
    {
    	/** 
    	* 枚举类生成3个实例
    	* output:
    	* It is a account type
		* It is a account type
		* It is a account type
		* FIXED
		**/
        System.out.println(AccountType.FIXED);
    }
}