<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="//xbd">
	  <html>
		  <body>
				<xsl:for-each select="child::*">
				Create database <xsl:value-of select="name(.)"/>; <br/>
					<xsl:for-each select="child::*">
					Create table <xsl:value-of select="name(.)"/> (
						<xsl:for-each select="child::*">
								<xsl:value-of select="name(.)"/>
								<xsl:choose>
										<xsl:when test="@tipodato='texto'"> text </xsl:when>
										<xsl:when test="@tipodato='entero'"> int </xsl:when>
										<xsl:when test="@tipodato='decimal'"> float  </xsl:when>
										<xsl:when test="@tipodato='logico'"> boolean </xsl:when>
										<xsl:when test="@tipodato='fecha'"> date </xsl:when>
								</xsl:choose>
								<xsl:if test="following-sibling::*">, </xsl:if>
						</xsl:for-each>);<br/>
					</xsl:for-each>
				</xsl:for-each>

					<xsl:for-each select="//instancias">
								use <xsl:value-of select="name(..)"/>; <br/>
						<xsl:for-each select="child::*">
								insert into  <xsl:value-of select="name(.)"/> values (<xsl:for-each select="child::*">
									<xsl:value-of select="(.)"/>
									<xsl:if test="following-sibling::*">, </xsl:if>
								</xsl:for-each>); <br/>
						</xsl:for-each>
					</xsl:for-each>
					
					<xsl:for-each select="//usuario">
								use <xsl:value-of select="name(..)"/>; <br/>
						<xsl:for-each select="child::*">
								insert into  <xsl:value-of select="name(.)"/> values (<xsl:for-each select="child::*">
									<xsl:value-of select="(.)"/>
									<xsl:if test="following-sibling::*">, </xsl:if>
								</xsl:for-each>); <br/>
						</xsl:for-each>
					</xsl:for-each>

			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
